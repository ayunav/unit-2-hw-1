//
//  DetailViewController.h
//  AVRestKitFoursquareAPIapp
//
//  Created by Ayuna Vogel on 9/24/15.
//  Copyright © 2015 Ayuna Vogel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

