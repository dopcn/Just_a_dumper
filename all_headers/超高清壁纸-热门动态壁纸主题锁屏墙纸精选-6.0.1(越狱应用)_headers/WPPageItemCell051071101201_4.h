//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPPageItemCell051071101201.h"

@class MASConstraint;

@interface WPPageItemCell051071101201_4 : WPPageItemCell051071101201
{
    MASConstraint *_hasDIYBottomViewConstraint;
    MASConstraint *_noDIYBottomViewConstraint;
    MASConstraint *_notHasViewConstraint;
}

@property(retain, nonatomic) MASConstraint *notHasViewConstraint; // @synthesize notHasViewConstraint=_notHasViewConstraint;
@property(retain, nonatomic) MASConstraint *noDIYBottomViewConstraint; // @synthesize noDIYBottomViewConstraint=_noDIYBottomViewConstraint;
@property(retain, nonatomic) MASConstraint *hasDIYBottomViewConstraint; // @synthesize hasDIYBottomViewConstraint=_hasDIYBottomViewConstraint;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateViewByData:(id)arg1 indexPath:(id)arg2 actionDelegate:(id)arg3;
- (void)layoutOtherView;
- (void)layoutImagesView;

@end

