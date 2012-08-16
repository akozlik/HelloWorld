//
//  ViewController.h
//  HelloWorld
//
//  Created by admin on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>
{
    IBOutlet UITextField *textField;
    IBOutlet UIButton *btnAlert;
}

@property (nonatomic, retain) IBOutlet UITextField *textField;
@property (nonatomic, retain) IBOutlet UIButton *btnAlert;

-(IBAction)sayHello:(id)sender;

@end
