//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSObject, SNHWGFloorDTO;
@protocol SNHWGShopSectionHeaderViewDelegate;

@interface SNHWGShopSectionHeaderView : UIView
{
    SNHWGFloorDTO *_floorDto;
    unsigned long long _selectedIndex;
    NSObject<SNHWGShopSectionHeaderViewDelegate> *_delegate;
    NSMutableDictionary *_offScreenViewCache;
}

@property(retain, nonatomic) NSMutableDictionary *offScreenViewCache; // @synthesize offScreenViewCache=_offScreenViewCache;
@property(nonatomic) __weak NSObject<SNHWGShopSectionHeaderViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) SNHWGFloorDTO *floorDto; // @synthesize floorDto=_floorDto;
- (void).cxx_destruct;
- (void)itemButtonTouched:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

