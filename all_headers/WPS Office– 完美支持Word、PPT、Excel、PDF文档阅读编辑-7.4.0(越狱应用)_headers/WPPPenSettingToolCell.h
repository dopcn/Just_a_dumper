//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UILabel, UIView;

@interface WPPPenSettingToolCell : UITableViewCell
{
    UILabel *_descriptionLabel;
    UIView *_toolPanelView;
    NSArray *_toolPanelSubviews;
}

@property(retain, nonatomic) NSArray *toolPanelSubviews; // @synthesize toolPanelSubviews=_toolPanelSubviews;
@property(retain, nonatomic) UIView *toolPanelView; // @synthesize toolPanelView=_toolPanelView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1;
- (void)dealloc;

@end

