//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SBBBtnView : UIView
{
    CDUnknownBlockType _selBlock;
    NSMutableArray *_itemArray;
    NSMutableArray *_buttonArray;
    NSMutableArray *_linerArray;
    UIView *_upLiner;
}

@property(retain, nonatomic) UIView *upLiner; // @synthesize upLiner=_upLiner;
@property(retain, nonatomic) NSMutableArray *linerArray; // @synthesize linerArray=_linerArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(copy, nonatomic) CDUnknownBlockType selBlock; // @synthesize selBlock=_selBlock;
- (void).cxx_destruct;
- (void)createBtnWithItem:(id)arg1 width:(double)arg2 index:(long long)arg3 needLiner:(_Bool)arg4;
- (id)getColorWithState:(long long)arg1;
- (id)creatLinerWithFrame:(struct CGRect)arg1;
- (void)clearLinerArray;
- (void)clearBtnArray;
- (void)updateWithBtnArray:(id)arg1;

@end

