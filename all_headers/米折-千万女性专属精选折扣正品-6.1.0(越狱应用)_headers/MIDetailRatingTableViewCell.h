//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AXRatingView, NSArray, RTLabel, UILabel, UIView;
@protocol MIDetailRatingTableViewCellImageDelegate;

@interface MIDetailRatingTableViewCell : UITableViewCell
{
    UIView *_cellLine;
    UIView *_cutLine;
    UILabel *_NameLabel;
    AXRatingView *_ratingView;
    UILabel *_babyOrderLabel;
    UILabel *_commentLabel;
    RTLabel *_commentHighlight;
    UILabel *_DetailLabel;
    UIView *_viewWithImage;
    NSArray *_imgs;
    id <MIDetailRatingTableViewCellImageDelegate> _delegate;
}

@property(nonatomic) __weak id <MIDetailRatingTableViewCellImageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *imgs; // @synthesize imgs=_imgs;
@property(nonatomic) __weak UIView *viewWithImage; // @synthesize viewWithImage=_viewWithImage;
@property(nonatomic) __weak UILabel *DetailLabel; // @synthesize DetailLabel=_DetailLabel;
@property(retain, nonatomic) RTLabel *commentHighlight; // @synthesize commentHighlight=_commentHighlight;
@property(nonatomic) __weak UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(nonatomic) __weak UILabel *babyOrderLabel; // @synthesize babyOrderLabel=_babyOrderLabel;
@property(nonatomic) __weak AXRatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(nonatomic) __weak UILabel *NameLabel; // @synthesize NameLabel=_NameLabel;
@property(nonatomic) __weak UIView *cutLine; // @synthesize cutLine=_cutLine;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)sendLargeImageView:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

