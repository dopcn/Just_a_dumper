//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BDNStarRateView, UIImageView, UILabel;

@interface BDNCouponHomeArriveStoreCellTagView : UIView
{
    _Bool _alreadyBuy;
    long long _tagType;
    UIImageView *_tagImageView;
    UILabel *_tagTextLabel;
    UILabel *_tagLabel;
    UILabel *_textLabel;
    BDNStarRateView *_starRateView;
    double _tagViewWidth;
}

@property(nonatomic) _Bool alreadyBuy; // @synthesize alreadyBuy=_alreadyBuy;
@property(nonatomic) double tagViewWidth; // @synthesize tagViewWidth=_tagViewWidth;
@property(retain, nonatomic) BDNStarRateView *starRateView; // @synthesize starRateView=_starRateView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *tagTextLabel; // @synthesize tagTextLabel=_tagTextLabel;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(nonatomic) long long tagType; // @synthesize tagType=_tagType;
- (void).cxx_destruct;
- (void)updateCurrentScore:(double)arg1;
- (void)updateTextLabelAttributeString:(id)arg1;
- (void)updateTextLabel:(id)arg1;
- (void)updateTagTextLabel:(id)arg1;
- (void)layoutSubviews;
- (id)initViewWithTagType:(long long)arg1 alreadyBuy:(_Bool)arg2 tagViewWidth:(double)arg3;
- (id)initViewWithTagType:(long long)arg1 tagViewWidth:(double)arg2;

@end

