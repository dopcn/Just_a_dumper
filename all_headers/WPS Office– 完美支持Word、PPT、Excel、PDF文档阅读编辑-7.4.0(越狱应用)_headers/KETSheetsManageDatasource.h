//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KETProxyWorkbookDelegate-Protocol.h"
#import "KETSheetsTabbarScrollViewDataSource-Protocol.h"

@class NSMutableArray, NSString;

@interface KETSheetsManageDatasource : NSObject <KETSheetsTabbarScrollViewDataSource, KETProxyWorkbookDelegate>
{
    _Bool _isProtectWorkBook;
    NSMutableArray *_sheetItemDataArray;
    long long _activeIndex;
}

@property(nonatomic) _Bool isProtectWorkBook; // @synthesize isProtectWorkBook=_isProtectWorkBook;
@property(nonatomic) long long activeIndex; // @synthesize activeIndex=_activeIndex;
@property(retain, nonatomic) NSMutableArray *sheetItemDataArray; // @synthesize sheetItemDataArray=_sheetItemDataArray;
- (void)onQueryWorkbookProtect:(id)arg1 Porectect:(_Bool)arg2 HavePassword:(_Bool)arg3 ProtectStructure:(_Bool)arg4 ProtectWindow:(_Bool)arg5;
- (void)onAfterWorksheetUnHidden:(id)arg1 activeIndex:(long long)arg2;
- (void)onAfterWorksheetUnProtection:(long long)arg1 sheetName:(id)arg2 errorcode:(int)arg3;
- (void)onAfterWorksheetProtection:(long long)arg1 sheetName:(id)arg2 errorcode:(int)arg3;
- (void)onAfterWorksheetHidden:(long long)arg1 activeIndex:(long long)arg2;
- (void)onAfterMoveWorksheetView:(long long)arg1 ToIndex:(long long)arg2 activeIndex:(long long)arg3;
- (void)onAfterUpdateSheetView:(id)arg1 updateName:(id)arg2 updateIndex:(long long)arg3 activeSheetIndex:(long long)arg4;
- (void)onAfterDeleteWorksheetView:(long long)arg1 activeIndex:(long long)arg2;
- (void)onCreateWorksheetView:(id)arg1 sheetIndex:(long long)arg2 sheetName:(id)arg3 sheetHidden:(_Bool)arg4 workbookProtected:(_Bool)arg5;
- (double)sheetTabbar:(id)arg1 widthForItemAtIndex:(long long)arg2;
- (id)sheetTabbar:(id)arg1 sheetItemAtIndex:(long long)arg2;
- (double)sheetTabbar:(id)arg1 heightForItemAtIndex:(long long)arg2;
- (long long)getActiveIndex;
- (long long)numberOfHideItems;
- (long long)numberOfVisibleItems;
- (struct CGSize)getTitleSize:(id)arg1;
- (_Bool)isNeedToDiaplayTitleTipsAtIndex:(long long)arg1;
- (long long)convertCoreIndexToInterfaceIndex:(long long)arg1;
- (long long)convertInterfaceIndexToCoreIndex:(long long)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

