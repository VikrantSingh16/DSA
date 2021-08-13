class HashTable {
    constructor(size){
      this.data = new Array(size);
    }
  set(key,value){
this.data.push(key);
this.data.push(value);
  }
  get(key){
      for(let i=0;i<this.data.length;i++){
          if(key==this.data[i]){
              return this.data[i+1];
          }
      }
  }
    _hash(key) {
      let hash = 0;
      for (let i =0; i < key.length; i++){
          hash = (hash + key.charCodeAt(i) * i) % this.data.length
      }
      return hash;
    }
  }
  
  const myHashTable = new HashTable(50);
  myHashTable.set('grapes', 10000)
  console.log(myHashTable.get('grapes'))
  myHashTable.set('apples', 9)
  console.log(myHashTable.get('apples'))
  myHashTable.set('name','vikrant');
  console.log(myHashTable.get('name'))
  