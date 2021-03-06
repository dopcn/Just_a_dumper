//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QXCardItemData, QXCardLabel, QXMarksImageView, UIImageView;

@interface QXCard1110005Item : UIView
{
    UIImageView *_shadowImageView;
    QXCardItemData *_itemData;
    QXMarksImageView *_marksImageView;
    QXCardLabel *_playCountLabel;
    QXCardLabel *_likeCountLabel;
    QXCardLabel *_titleLabel;
    QXCardLabel *_subTitleLabel;
    CDUnknownBlockType _itemClicked;
}

@property(copy, nonatomic) CDUnknownBlockType itemClicked; // @synthesize itemClicked=_itemClicked;
@property(retain, nonatomic) QXCardLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) QXCardLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QXCardLabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) QXCardLabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) QXMarksImageView *marksImageView; // @synthesize marksImageView=_marksImageView;
@property(retain, nonatomic) QXCardItemData *itemData; // @synthesize itemData=_itemData;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_initSubviews;
- (void)handleTap:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

