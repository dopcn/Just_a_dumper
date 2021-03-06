//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGRemoteImageView, UIImageView, UILabel;

@interface IGSaveToCollectionsCell : UICollectionViewCell
{
    _Bool _highlightedState;
    UILabel *_title;
    IGRemoteImageView *_thumbnail;
    UIImageView *_checkmark;
}

@property(nonatomic) _Bool highlightedState; // @synthesize highlightedState=_highlightedState;
@property(readonly, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(readonly, nonatomic) IGRemoteImageView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

