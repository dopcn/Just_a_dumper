//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNBBaseVC.h"

@class SNBStrategyMessage, SNBStrategyMessageDetailDataSource, UITableView;

@interface SNBStrategyMessageDetailViewController : SNBBaseVC
{
    SNBStrategyMessage *_message;
    SNBStrategyMessageDetailDataSource *_dataSource;
    UITableView *_listView;
}

@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) SNBStrategyMessageDetailDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SNBStrategyMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)_snb_configureTableView;
- (void)_snb_updateData;
- (void)viewDidLoad;
- (id)initWithMessageID:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end

