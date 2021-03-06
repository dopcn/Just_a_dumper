//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, RACSubject;

@interface CBDShopListSegmentCell : UITableViewCell
{
    NSArray *_shopButtons;
    RACSubject *_subject;
}

@property(retain, nonatomic) RACSubject *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *shopButtons; // @synthesize shopButtons=_shopButtons;
- (void).cxx_destruct;
- (id)indexSelectedSignal;
- (void)selectTab:(id)arg1;
- (void)setShopSearchResults:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)ga_label;

@end

