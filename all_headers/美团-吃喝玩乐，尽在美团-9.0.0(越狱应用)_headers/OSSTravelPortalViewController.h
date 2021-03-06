//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModulesViewController.h"

#import "OSSTravelPortalViewController-Protocol.h"
#import "SAKPortalable-Protocol.h"

@class NSNumber, NSString;

@interface OSSTravelPortalViewController : GCBaseModulesViewController <SAKPortalable, OSSTravelPortalViewController>
{
    NSNumber *_cityID;
}

@property(retain, nonatomic) NSNumber *cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;
- (id)generateModulesArray;
- (id)modules;
- (void)setNeedShowErrorModule:(_Bool)arg1;
- (void)refreshData;
- (id)reloadPage;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)cityIDPassToMAPI;
- (void)fillCityIDToWhiteBoard;
- (id)initWithCityID:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)tableViewStyle;
- (void)oss_viewDidLoad;
- (id)pageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

