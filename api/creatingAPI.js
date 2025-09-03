const express=require('express');
const app=express();

app.use(express.json());

app.get('/',(req,res)=>{
    res.status(200).send('Success');
})

app.post('/add-user',(req,res)=>{
    const data=req.body;
    res.json({
        message:"User added",
        data:data
    })
})

app.put('/user/:id',(req,res)=>{
    const userId=req.params.id;
    const data=req.body;
    
})

app.listen(PORT,()=>{
    console.log(`Server running on port: ${PORT}`);
})