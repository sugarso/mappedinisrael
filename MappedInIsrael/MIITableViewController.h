//
//  MIITableViewController.h
//  MappedInIsrael
//
//  Created by Genady Okrain on 11/12/13.
//  Copyright (c) 2013 Genady Okrain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GAITrackedViewController.h"
#import "MIICompany.h"
#import "MIIData.h"
#import "MIICompanyViewController.h"
#import "MIIViewController.h"

@interface MIITableViewController : GAITrackedViewController <UISearchDisplayDelegate,UISearchBarDelegate>

@property (strong, nonatomic) MIIData *data;
@property (strong, nonatomic) NSArray *clusterAnnotation;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UISegmentedControl *whosHiring;

@end