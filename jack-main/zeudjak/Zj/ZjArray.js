

class ZjArray {

static $(o) { return o; }

constructor(size, dispose)
{
	this.size = size;
	this.disposeElem = dispose;
	this.table = new Array(this.size);
	for (let i = 0; i < this.size; i++) {
		this.table[i] = null;
	}
}

dispose()
{
	if (this.disposeElem !== null) {
		for (let i = 0; i < this.size; i++) {
			this.disposeElem(this.table[i]);
		}
	}
	delete this.table;
	delete this;
}

set(k, val)
{
	if (k >= this.size) {
		return null;
	}
	if (this.disposeElem !== null) {
		if (this.table[k] !== null) {
			this.disposeElem(this.table[k]);
		}
	}
	this.table[k] = val;
	return val;
}

get(k)
{
	if (k < this.size) {
		return this.table[k];
	}
	return null;
}

}