//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIButton;

@interface NVHomeAllCategoryGroupView : UIView
{
    _Bool _isExpended;
    long long _maxLines;
    long long _numberOfItems;
    NSArray *_data;
    NSMutableArray *_items;
    UIButton *_expandButton;
    NSString *_classification;
    CDUnknownBlockType _expandBlock;
    long long _row;
}

+ (double)heightWithData:(id)arg1 isExpended:(_Bool)arg2 maxLines:(long long)arg3 numberOfItems:(long long)arg4;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(copy, nonatomic) CDUnknownBlockType expandBlock; // @synthesize expandBlock=_expandBlock;
@property(copy, nonatomic) NSString *classification; // @synthesize classification=_classification;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) _Bool isExpended; // @synthesize isExpended=_isExpended;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadViewWithData:(id)arg1;
- (id)initWithMaxCount:(long long)arg1;

@end

