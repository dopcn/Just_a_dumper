//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFActiveViewController.h"

#import "DispatchPaning2Pop-Protocol.h"
#import "SWTableViewModelDelegate-Protocol.h"
#import "UIViewControllerDispatchable-Protocol.h"

@class NSString, SWTableViewController;

@interface IFOlympicMomentViewController : IFActiveViewController <UIViewControllerDispatchable, SWTableViewModelDelegate, DispatchPaning2Pop>
{
    SWTableViewController *_tableViewController;
}

@property(retain, nonatomic) SWTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (void)willPush:(id)arg1;
- (void)createModel;
- (void)createTableView;
- (void)createTopView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

