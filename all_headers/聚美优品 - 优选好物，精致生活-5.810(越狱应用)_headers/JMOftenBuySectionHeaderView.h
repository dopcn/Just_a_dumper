//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel;

@interface JMOftenBuySectionHeaderView : UICollectionReusableView
{
    UIImageView *_icon;
    UILabel *_title;
}

+ (double)headerViewHeight;
+ (id)headerViewReuseIdentifier;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

