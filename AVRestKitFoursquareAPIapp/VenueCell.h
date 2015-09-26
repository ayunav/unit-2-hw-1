//
//  VenueCell.h
//  AVRestKitFoursquareAPIapp
//
//  Created by Ayuna Vogel on 9/25/15.
//  Copyright © 2015 Ayuna Vogel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VenueCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *distanceLabel;
@property (nonatomic, weak) IBOutlet UILabel *checkinsLabel;

@end
