//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, SSUIShareActinoSheetItemView;

@interface SSUIPlatformsView : UIView
{
    NSArray *_items;
    long long _totalColums;
    long long _totalRow;
    long long _platformIndex;
    double _itemW;
    double _itemH;
    double _platformItemW;
    CDUnknownBlockType _clickHandle;
    CDUnknownBlockType _cancelHandle;
    NSMutableArray *_itemArr;
    SSUIShareActinoSheetItemView *_itemView;
    double _screenW;
    double _screenH;
}

@property(nonatomic) double screenH; // @synthesize screenH=_screenH;
@property(nonatomic) double screenW; // @synthesize screenW=_screenW;
@property(retain, nonatomic) SSUIShareActinoSheetItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) NSMutableArray *itemArr; // @synthesize itemArr=_itemArr;
@property(copy, nonatomic) CDUnknownBlockType cancelHandle; // @synthesize cancelHandle=_cancelHandle;
@property(copy, nonatomic) CDUnknownBlockType clickHandle; // @synthesize clickHandle=_clickHandle;
@property(nonatomic) double platformItemW; // @synthesize platformItemW=_platformItemW;
@property(nonatomic) double itemH; // @synthesize itemH=_itemH;
@property(nonatomic) double itemW; // @synthesize itemW=_itemW;
@property(nonatomic) long long platformIndex; // @synthesize platformIndex=_platformIndex;
@property(nonatomic) long long totalRow; // @synthesize totalRow=_totalRow;
@property(nonatomic) long long totalColums; // @synthesize totalColums=_totalColums;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)needRedrawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setplatformItemW:(double)arg1;
- (id)initWithTotalColumn:(long long)arg1 totalRow:(long long)arg2 platformIndex:(long long)arg3;

@end

