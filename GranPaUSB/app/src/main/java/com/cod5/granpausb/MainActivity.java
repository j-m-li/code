package com.cod5.granpausb;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.content.Intent;
import android.hardware.usb.UsbManager;
import android.os.Bundle;
import android.widget.TextView;
//import android.hardware.usb.UsbDevice;
import android.hardware.usb.UsbAccessory;
import android.hardware.usb.UsbDeviceConnection;
import android.hardware.usb.UsbEndpoint;
import android.hardware.usb.UsbRequest;
import android.os.Build;
import android.util.Log;

import androidx.fragment.app.FragmentManager;
import androidx.appcompat.app.AppCompatActivity;

import com.cod5.granpausb.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity implements FragmentManager.OnBackStackChangedListener {

    // Used to load the 'granpausb' library on application startup.
    static {
        System.loadLibrary("granpausb");
    }

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Example of a call to a native method
        TextView tv = binding.sampleText;
        tv.setText(stringFromJNI());
// https://github.com/felis/USB_Host_Shield_2.0/blob/master/adk.h

        UsbManager usbManager = null;
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            usbManager = (UsbManager) getSystemService(Context.USB_SERVICE);
        }
        /*
        for(UsbDevice device : usbManager.getDeviceList().values()) {
            tv.setText(device.getDeviceName());
        }
        UsbDevice d = (UsbDevice) getIntent().getParcelableExtra(UsbManager.EXTRA_DEVICE);
        if (d != null)
        {
            tv.setText( d.toString());
        }*/
        if (usbManager != null && usbManager.getAccessoryList() != null) {
            for (UsbAccessory device : usbManager.getAccessoryList()) {
                tv.setText(device.getDescription());
            }
        }
        UsbAccessory d = (UsbAccessory) getIntent().getParcelableExtra(UsbManager.EXTRA_ACCESSORY);
        if (d != null) {
            tv.setText(d.toString());
        }
    }

    @Override
    public void onBackStackChanged() {
        getSupportActionBar().setDisplayHomeAsUpEnabled(getSupportFragmentManager().getBackStackEntryCount() > 0);
    }

    @Override
    public boolean onSupportNavigateUp() {
        onBackPressed();
        return true;
    }

    @Override
    protected void onNewIntent(Intent intent) {
        TextView tv = binding.sampleText;
        tv.setText(intent.getAction());
        if ("android.hardware.usb.action.USB_ACCESSORY_ATTACHED".equals(intent.getAction())) {

            tv.setText("USB accessory detected");
        }
        /*
        if("android.hardware.usb.action.USB_DEVICE_ATTACHED".equals(intent.getAction())) {

            tv.setText("USB device detected");
        }
        */

        super.onNewIntent(intent);
    }

    /**
     * A native method that is implemented by the 'granpausb' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}