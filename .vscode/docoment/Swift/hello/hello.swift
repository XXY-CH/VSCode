import Foundation
var pi = 0.0
for i in 1...100000000 {
    pi += 4.0 * pow(-1.0, Double(i + 1)) / (2.0 * Double(i) - 1.0)
}
print("pi = \(pi)")
