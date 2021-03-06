//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNListContainerController.h"

#import "QNListContainerControllerSubclass-Protocol.h"

@class NSString;

@interface QNNewsContainerController : QNListContainerController <QNListContainerControllerSubclass>
{
}

- (void)didReceiveMemoryWarning;
- (void)_transformListRefreshModeIfNeeded:(id)arg1;
- (Class)_classOfChildControllerFromSubmenuItem:(id)arg1;
- (void)_showTopTipsViewIfNeeded;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)networkStatusDidChangedNotification:(id)arg1;
- (void)splashViewDidDismissNotification:(id)arg1;
- (void)didReceivedCleanCacheNotification:(id)arg1;
- (id)pageViewPlaceholderViewClass;
- (void)switchActiveChannelFrom:(id)arg1 to:(id)arg2;
- (void)willRemoveAllChildControllers:(id)arg1;
- (_Bool)pageViewShouldPreload;
- (id)contentViewControllerWithSubMenuItem:(id)arg1;
- (id)subMenuContainerChannel;
- (id)subMenuDataSource;
- (long long)subMenuType;
- (_Bool)haveSubMenu;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

