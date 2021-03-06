//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PCCollectionModuleAppearance-Protocol.h"

@class NSString, PCModuleController;
@protocol PCModuleLayoutViewController;

@interface PHHomeBottomLogoModuleApperance : NSObject <PCCollectionModuleAppearance>
{
    PCModuleController *_moduleController;
    id <PCModuleLayoutViewController> _collectionModuleLayoutViewController;
}

@property(nonatomic) __weak id <PCModuleLayoutViewController> collectionModuleLayoutViewController; // @synthesize collectionModuleLayoutViewController=_collectionModuleLayoutViewController;
@property(retain, nonatomic) PCModuleController *moduleController; // @synthesize moduleController=_moduleController;
- (void).cxx_destruct;
- (struct UIEdgeInsets)insetForModule;
- (double)minimumLineSpacingForModule;
- (double)minimumInteritemSpacingForModule;
- (struct CGSize)referenceSizeForFooterInModule;
- (struct CGSize)referenceSizeForHeaderInModule;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (void)registerViewForModule;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItemsInModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

