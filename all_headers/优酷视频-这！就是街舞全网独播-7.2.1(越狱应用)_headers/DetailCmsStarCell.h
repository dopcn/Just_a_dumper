//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComponentCollectionViewCell.h"

@class DetailCMSStarCardVideo, UIImageView, UILabel;

@interface DetailCmsStarCell : ComponentCollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_nameLabel;
    UILabel *_subNameLabel;
    UIImageView *_starIcon;
    DetailCMSStarCardVideo *_starCardVideo;
}

@property(retain, nonatomic) DetailCMSStarCardVideo *starCardVideo; // @synthesize starCardVideo=_starCardVideo;
@property(retain, nonatomic) UIImageView *starIcon; // @synthesize starIcon=_starIcon;
@property(retain, nonatomic) UILabel *subNameLabel; // @synthesize subNameLabel=_subNameLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setupWithCardVideo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

