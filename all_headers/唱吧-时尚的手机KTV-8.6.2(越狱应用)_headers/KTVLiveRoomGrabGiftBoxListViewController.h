//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVBaseViewController.h"

#import "UITabBarDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GiftWsMessage, KTVLiveRoomGiftBoxGraber, KTVTableView, NSArray, NSString;

@interface KTVLiveRoomGrabGiftBoxListViewController : KTVBaseViewController <UITableViewDelegate, UITabBarDelegate>
{
    KTVTableView *_tableView;
    GiftWsMessage *_giftBoxMessage;
    KTVLiveRoomGiftBoxGraber *_currentUser;
    NSArray *_allGraber;
}

+ (id)controllerWithGiftBoxMessage:(id)arg1;
@property(copy, nonatomic) NSArray *allGraber; // @synthesize allGraber=_allGraber;
@property(copy, nonatomic) KTVLiveRoomGiftBoxGraber *currentUser; // @synthesize currentUser=_currentUser;
@property(copy, nonatomic) GiftWsMessage *giftBoxMessage; // @synthesize giftBoxMessage=_giftBoxMessage;
@property(nonatomic) __weak KTVTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refrshView;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

