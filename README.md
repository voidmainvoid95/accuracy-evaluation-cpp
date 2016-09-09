# Accuracy evaluation
A c++ implementation for calculating the accuracy metrics (Accuracy, Error Rate, Precision(micro/macro), Recall(micro/macro), Fscore(micro/macro)) for
 classification tasks based on the paper [A systematic analysis of performance measures for classification tasks]
 (http://www.sciencedirect.com/science/article/pii/S0306457309000259) and MATLAB confusion implementation.


# Build

```
    cd accuracy-evaluation-cpp
    mkdir build
    cd build
    cmake ..
    make
    
    Demo
    ./accuracy_evaluation 
```


# Uses

(labels and outputs are matrices (labels: classes x samples | outputs: classes x samples)

```c++
    int main(int argc, char** argv) {
    
       /* double targets[][] = {
        {1, 1, 0, 0, 0, 0},
         {0, 0, 1, 1, 0, 0},
          {0, 0, 0, 0, 1, 1}
          };
        double outputs[][] = {
        {0.1, 0.86, 0.2, 0.1, .02, 0.1},
         {0.4, 0.12, 0.768, 0.145, 0.1, 0.8},
          {0.454, 0.35, 0.21, 0.0, 0.89, 0.9999}
          };
        */
    
        vector<vector<double> > targets;
        vector<double> row;
        row.push_back(1);
        row.push_back(1);
        row.push_back(0);
        row.push_back(0);
        row.push_back(0);
        row.push_back(0);
        targets.push_back(row);
    
        row.clear();
        row.push_back(0);
        row.push_back(0);
        row.push_back(1);
        row.push_back(1);
        row.push_back(0);
        row.push_back(0);
        targets.push_back(row);
    
        row.clear();
        row.push_back(0);
        row.push_back(0);
        row.push_back(0);
        row.push_back(0);
        row.push_back(1);
        row.push_back(1);
        targets.push_back(row);
    
        vector<vector<double> > outputs;
        row.clear();
        row.push_back(0.1);
        row.push_back(0.86);
        row.push_back(0.2);
        row.push_back(0.1);
        row.push_back(0.02);
        row.push_back(0.1);
        outputs.push_back(row);
    
        row.clear();
        row.push_back(0.4);
        row.push_back(0.12);
        row.push_back(0.768);
        row.push_back(0.145);
        row.push_back(0.1);
        row.push_back(0.8);
        outputs.push_back(row);
    
        row.clear();
        row.push_back(0.454);
        row.push_back(0.35);
        row.push_back(0.21);
        row.push_back(0.0);
        row.push_back(0.89);
        row.push_back(0.99999);
        outputs.push_back(row);
    
        Confusion confusion = Confusion(targets, outputs);
        confusion.print();
    
        Evaluation evaluation = Evaluation(confusion);
        evaluation.print();
    
        return;
    }

```

OR (labels and outputs are actual class values)

```c++
    int main(int argc, char** argv) {
    
           vector<int> targets; //{0,0,1,1,2,2}
           vector<int> outputs; //{0,2,1,1,2,2}
           targets.push_back(0);
           targets.push_back(0);
           targets.push_back(1);
           targets.push_back(1);
           targets.push_back(2);
           targets.push_back(2);
       
           outputs.push_back(0);
           outputs.push_back(2);
           outputs.push_back(1);
           outputs.push_back(1);
           outputs.push_back(2);
           outputs.push_back(2);
       
           Confusion confusion = Confusion(targets, outputs);
           confusion.print();
       
           Evaluation evaluation = Evaluation(confusion);
           evaluation.print();
       
           return;
    }

```

# Output

Confusion Results

  	Confusion value
  		c = 0.17
  	Confusion Matrix
  		1 0 1
  		0 2 0
  		0 0 2
  	Indices
  		[1]		[]		[0]
  		[]		[2,3]		[]
  		[]		[]		[4,5]
  	Percentages
  		0.2 0.0 1.0 0.8
  		0.0 0.0 1.0 1.0
  		0.0 0.33 0.67 1.0


Accuracy Evaluation Results

  	Average Accuracy(%)       : 91.11
  	Error(%)                  : 8.89
  	Precision (Micro)(%)      : 88.89
  	Recall (Micro)(%)         : 93.02
  	Fscore (Micro)(%)         : 90.91
  	Precision (Macro)(%)      : 88.89
  	Recall (Macro)(%)         : 94.44
  	Fscore (Macro)(%)         : 91.58


# Note

For Java Implementation, visit [accuracy-evaluation-java](https://github.com/ashokpant/accuracy-evaluation-java.git)

For Scala Implementation, visit [accuracy-evaluation-scala](https://github.com/ashokpant/accuracy-evaluation-scala.git)

For MATLAB Implementation, visit [accuracy-evaluation-matlab](https://github.com/ashokpant/accuracy-evaluation-matlab.git)

