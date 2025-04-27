//   Setup
//   - npm create vite@latest typescript-tutorial -- --template vanilla-ts
//   - Create src/tutorial.ts
//   - Import tutorial in src/main.ts
//   
//   Notes - delete these
//   
//   1. npm install -g typescript (global on workspace)
//   2. run tsc --init to initialize tsconfig.json
//   3. run tsc --watch to automatically compile ts to js
//   -Changes are immediately reflected in index.js in distribution folder
//   4. run node --watch dist/index.js to automatically run index.js on file change


interface value {
    name: string
    id: number
}

let object: value = { name: 'random', id: 123 } // Object made using interface

let requestStatus: 'pending' | 'error' | 'success' = 'pending'
let name:string = 'john malan'
let amount:number = 20
amount.toString()
let locked:boolean = true
let prices:number[] = [25, 75, 175, 325, 575]
let array: (string | boolean)[] = ['apple', true, 'orange', false] // Array
let car: { brand: string; year: number } = { brand: 'toyota', year: 2020 } // Object 

let book = { title: 'book', cost: 15 }
let pen = { title: 'pen', cost: 5 }
let notebook = { title: 'notebook' }

let items: { readonly title: string; cost?: number }[] = [book, pen, notebook]  // Optional cost
// items[0].title = 'newTitle' // readonly, can't modify value

function calculateDiscount(price: number): number {
    return price * 0.9
}
const finalPrice = calculateDiscount(250)

function calculatePrice(price: number, discount?: number): number {
    return price - (discount || 0) // Provide 0 option because discount is optional
}


function sum(message:string, ...numbers:number[]): string {
    const doubled = numbers.map((num) => num * 2)

    let total = numbers.reduce((previous, current) => {
        return previous + current
    })
    return `${message}${total}`
}
let result = sum('Total: ', 2, 4, 6, 8, 10)


function processInput(input: number|string): number|string {
    if (typeof input === 'number') {
        console.log(input * 2)
    } else {
        console.log(input.toUpperCase())
    }
    return input
}


function createEmployee({id}: {id:number}):{
    id:number
    isActive:boolean
}{
    return { id, isActive: id % 2 === 0}
}
const first = createEmployee({id: 1}) // isActive: false
const second = createEmployee({id: 2}) // isActive: true


function createStudent(student:{id:number, name:string}):void {
    console.log(`Welcome to the course ${student.name}`)
}
const newStudent = { id: 5, name: 'beth' }
createStudent(newStudent)
createStudent({ id: 22, name: 'markus' })


function processData( input:string|number, config:{reverse:boolean}={reverse:false}): number|string {
    if (typeof input === 'number') {
        return input * input
    } else {
        if(config.reverse) {
            const reverseInput = input.split('').reverse().join('')
            return reverseInput.toUpperCase()
        } else {
            return input.toUpperCase()
        }
    }
    /* else {
        return config.reverse 
            ? input.toUpperCase().split('').reverse().join('') 
            : input.toUpperCase()
    }
    */
}
console.log(processData(10))
console.log(processData("Dodge this", {reverse: true}))
console.log(processData("Dodge this", {reverse: false}))

type Employee = { id: number; name: string; department: string }
type Manager = { id: number; name: string; employees: Employee[] }

const greg: Employee = { id: 1, name: 'alice', department: 'IT' }
const bob: Manager = { id: 1, name: 'bonobo', employees: [ greg ]}

interface Book { // Interfaces allow you to define object shape (objects only)
    readonly isbn: number;
    title: string;
    author: string;
    genre?: string;
    printAuthor():void;
}
const newBook: Book = {
    isbn: 991144114, 
    title: 'ABC', 
    author: 'Markus Brown', 
    printAuthor() {
        console.log(this.author)
    }
}

enum ServerResponseStatus { Success = 200, Error = 500 }

interface ServerResponse { result: ServerResponseStatus; data: string[]; }

function getServerResponse():ServerResponse{
    return {
        result: ServerResponseStatus.Success,
        data:['item 1', 'item 2']
    }
}

let unknownValue: unknown // Unknown: type-safe counterpart of any; Could be anything but must check its type first
// Bad  unknownValue.toFixed(2)
// Good  if (typeof unknownValue === 'number') { unknownValue.toFixed(2) }


