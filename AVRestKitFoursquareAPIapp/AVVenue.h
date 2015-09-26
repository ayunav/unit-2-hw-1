//
//  AVVenue.h
//  AVRestKitFoursquareAPIapp
//
//  Created by Ayuna Vogel on 9/24/15.
//  Copyright © 2015 Ayuna Vogel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Location.h"
@class Stats;

@interface AVVenue : NSObject

@property (nonatomic, strong) NSString *name;

@property (nonatomic, strong) Location *location;
@property (strong, nonatomic) Stats *stats;

@end
