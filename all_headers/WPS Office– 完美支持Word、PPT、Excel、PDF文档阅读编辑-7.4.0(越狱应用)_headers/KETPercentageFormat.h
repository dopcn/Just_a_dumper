//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KETNumberFormatDetailBase.h"

#import "KETDecimalsAreaViewDelegate-Protocol.h"

@class KETDecimalsAreaView, NSString;

@interface KETPercentageFormat : KETNumberFormatDetailBase <KETDecimalsAreaViewDelegate>
{
    KETDecimalsAreaView *decimalsAreaView;
}

- (void)onQueryNumberFormatSetting:(id)arg1 NumberForamtInfo:(struct NumberFormatCatInfo *)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)decimalsAreaViewOperate:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

