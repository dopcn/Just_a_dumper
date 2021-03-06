//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "HalfHeadrAllExpand-Protocol.h"
#import "StarScrollViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ChildCardCollectionViewController, ChildStarCollectionViewController, ChildTextHeaderView, DetailCardsController, NSMutableArray, NSString, UIBrandHeaderView, UIBrandVideoCellView, UIHalfInfoView, UIView;
@protocol CardControllerDelegate, ScrollViewDelegate;

@interface ChildBrandScrollView : UIScrollView <UIScrollViewDelegate, StarScrollViewDelegate, HalfHeadrAllExpand>
{
    _Bool _isBrand;
    _Bool _isHalf;
    id <ScrollViewDelegate> _scrollDelegate;
    NSString *_vvId;
    NSString *_playshowId;
    DetailCardsController<CardControllerDelegate> *_cardsController;
    UIBrandHeaderView *_brandHeader;
    UIBrandVideoCellView *_brandVideo;
    UIHalfInfoView *_halfInfoView;
    ChildCardCollectionViewController *_brandCards;
    ChildStarCollectionViewController *_brandStars;
    NSMutableArray *_serialController;
    NSMutableArray *_lines;
    ChildTextHeaderView *_brandStarHeader;
    double _offset;
    UIView *_line;
    id _scrollData;
    double _halfHeaderHeightDiff;
    NSMutableArray *_expObject;
    NSMutableArray *_lastExpObject;
    NSMutableArray *_tmpExpObject;
}

@property(retain, nonatomic) NSMutableArray *tmpExpObject; // @synthesize tmpExpObject=_tmpExpObject;
@property(retain, nonatomic) NSMutableArray *lastExpObject; // @synthesize lastExpObject=_lastExpObject;
@property(retain, nonatomic) NSMutableArray *expObject; // @synthesize expObject=_expObject;
@property(nonatomic) double halfHeaderHeightDiff; // @synthesize halfHeaderHeightDiff=_halfHeaderHeightDiff;
@property(nonatomic) _Bool isHalf; // @synthesize isHalf=_isHalf;
@property(nonatomic) _Bool isBrand; // @synthesize isBrand=_isBrand;
@property(retain, nonatomic) id scrollData; // @synthesize scrollData=_scrollData;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) ChildTextHeaderView *brandStarHeader; // @synthesize brandStarHeader=_brandStarHeader;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableArray *serialController; // @synthesize serialController=_serialController;
@property(retain, nonatomic) ChildStarCollectionViewController *brandStars; // @synthesize brandStars=_brandStars;
@property(retain, nonatomic) ChildCardCollectionViewController *brandCards; // @synthesize brandCards=_brandCards;
@property(retain, nonatomic) UIHalfInfoView *halfInfoView; // @synthesize halfInfoView=_halfInfoView;
@property(retain, nonatomic) UIBrandVideoCellView *brandVideo; // @synthesize brandVideo=_brandVideo;
@property(retain, nonatomic) UIBrandHeaderView *brandHeader; // @synthesize brandHeader=_brandHeader;
@property(nonatomic) __weak DetailCardsController<CardControllerDelegate> *cardsController; // @synthesize cardsController=_cardsController;
@property(retain, nonatomic) NSString *playshowId; // @synthesize playshowId=_playshowId;
@property(retain, nonatomic) NSString *vvId; // @synthesize vvId=_vvId;
@property(nonatomic) __weak id <ScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (void)didScrollEnd;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)computeExpose:(_Bool)arg1;
- (void)clearExpObjects;
- (_Bool)haveHistory;
- (_Bool)haveSerial;
- (_Bool)haveCard;
- (_Bool)haveStar;
- (void)addCards:(id)arg1 name:(id)arg2 idd:(id)arg3 isserial:(_Bool)arg4 headername:(id)arg5 serialname:(id)arg6 serialid:(long long)arg7;
- (void)addLine;
- (void)setScrollData:(id)arg1 isBrand:(_Bool)arg2 ishalf:(_Bool)arg3;
- (void)didChangeHeaderViewSize:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

