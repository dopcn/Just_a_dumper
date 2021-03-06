//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMEBaseViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UITableView;

@interface UMECheckAirListViewController : UMEBaseViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    NSDictionary *_airListData;
    NSMutableArray *_airListrray;
    UITableView *airListTableView;
    long long _clickTag;
    _Bool _needRequest;
    NSMutableDictionary *_requestJourneyPara;
    NSString *_sessionKey;
}

@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(nonatomic) _Bool needRequest; // @synthesize needRequest=_needRequest;
@property(retain, nonatomic) NSMutableDictionary *requestJourneyPara; // @synthesize requestJourneyPara=_requestJourneyPara;
@property(retain, nonatomic) NSArray *airListrray; // @synthesize airListrray=_airListrray;
@property(retain, nonatomic) NSDictionary *airListData; // @synthesize airListData=_airListData;
- (void).cxx_destruct;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidStartLoad:(id)arg1;
- (void)getCheckJourneySuccess:(id)arg1;
- (void)getCheckSeatMap:(id)arg1;
- (void)getCheckJourney;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancleCheckin:(id)arg1;
- (void)infoViewTapped:(id)arg1;
- (void)back;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

