//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MLUserCardLevelComponentView : UIView
{
    NSArray *_currentTypeArray;
    NSArray *_animaitonContainerViews;
    NSArray *_items;
    NSArray *_itemViews;
}

@property(retain, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *animaitonContainerViews; // @synthesize animaitonContainerViews=_animaitonContainerViews;
@property(retain, nonatomic) NSArray *currentTypeArray; // @synthesize currentTypeArray=_currentTypeArray;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)setTypeAtIndex:(long long)arg1 type:(int)arg2;
- (int)showTypeAtIndex:(long long)arg1;
- (void)layoutAnimationViews;
- (void)layoutSubviews;
- (void)addCardLevelAndGradeViews:(id)arg1 isCurrentUser:(_Bool)arg2;
- (void)addAnimaitonContainerViews:(unsigned long long)arg1;
- (void)configureWithCardLevelAndGradeItems:(id)arg1 isCurrentUser:(_Bool)arg2;
- (void)addTapGesture;
- (void)awakeFromNib;

@end

