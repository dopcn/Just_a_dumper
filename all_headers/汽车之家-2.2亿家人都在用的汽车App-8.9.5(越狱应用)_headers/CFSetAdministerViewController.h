//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHUIFramework/AHViewController.h>

#import "CFPullUpdateInterface-Protocol.h"
#import "CFSetAdministerViewManagerDelegate-Protocol.h"

@class CFSetAdministerDataSource, CFSetAdministerViewManager, NSString;

@interface CFSetAdministerViewController : AHViewController <CFSetAdministerViewManagerDelegate, CFPullUpdateInterface>
{
    NSString *_socialid;
    CFSetAdministerViewManager *_viewManger;
    CFSetAdministerDataSource *_dataSource;
}

@property(retain, nonatomic) CFSetAdministerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CFSetAdministerViewManager *viewManger; // @synthesize viewManger=_viewManger;
@property(copy, nonatomic) NSString *socialid; // @synthesize socialid=_socialid;
- (void).cxx_destruct;
- (_Bool)navigationBackCanBeginWithDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)FinishButtonDidClick:(id)arg1;
- (void)getTableDataAcitonType:(long long)arg1;
- (void)deleteAdminister:(id)arg1 OperationBlock:(CDUnknownBlockType)arg2;
- (void)pullUpdateType:(long long)arg1;
- (void)sendPV;
- (void)prepareData;
- (void)layout;
- (void)viewDidLoad;
- (void)setup:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

