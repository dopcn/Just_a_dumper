//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface NMNoContentCell : UITableViewCell
{
    UILabel *_label;
    _Bool _blackMode;
}

+ (double)height;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 blackMode:(_Bool)arg3;

@end

