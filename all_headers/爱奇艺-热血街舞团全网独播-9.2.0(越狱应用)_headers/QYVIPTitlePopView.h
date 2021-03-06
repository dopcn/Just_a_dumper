//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIImageView;

@interface QYVIPTitlePopView : UIView
{
    _Bool _isHidden;
    long long _index;
    CDUnknownBlockType _menuItemSelectedAction;
    CDUnknownBlockType _ClosedCallback;
    UIView *_bgView;
    UIView *_popMenuView;
    UIImageView *_arrowImage;
    NSArray *_titleArray;
    NSMutableArray *_menuArray;
}

@property(retain, nonatomic) NSMutableArray *menuArray; // @synthesize menuArray=_menuArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UIView *popMenuView; // @synthesize popMenuView=_popMenuView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType ClosedCallback; // @synthesize ClosedCallback=_ClosedCallback;
@property(copy, nonatomic) CDUnknownBlockType menuItemSelectedAction; // @synthesize menuItemSelectedAction=_menuItemSelectedAction;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
- (void).cxx_destruct;
- (void)hideAnimation;
- (void)showAnimation;
- (void)generateLayout;
- (void)setTitles:(id)arg1;
- (void)onTap:(id)arg1;
- (void)registerTapGesture;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

