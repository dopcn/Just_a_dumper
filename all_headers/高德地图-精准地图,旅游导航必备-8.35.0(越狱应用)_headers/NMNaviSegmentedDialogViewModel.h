//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMNaviNotificationViewModel.h"

@class NSArray;

@interface NMNaviSegmentedDialogViewModel : NMNaviNotificationViewModel
{
    _Bool _isOffical;
    NSArray *_itemList;
    unsigned long long _segmentedType;
}

@property(nonatomic) unsigned long long segmentedType; // @synthesize segmentedType=_segmentedType;
@property(nonatomic) _Bool isOffical; // @synthesize isOffical=_isOffical;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (void)dealloc;
- (id)subTitleAtIndex:(long long)arg1;
- (id)titleAtIndex:(long long)arg1;
- (void)refreshTitleAndSubTitleWithIndex:(long long)arg1;

@end

