//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXPlainCell.h"

@class ContactAvatarImageView, NSString, YXThemeLabel;

@interface OneContactPickerCell : YXPlainCell
{
    NSString *_userID;
    ContactAvatarImageView *_portraitImageView;
    YXThemeLabel *_nameLabel;
    YXThemeLabel *_numberLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) YXThemeLabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) YXThemeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) ContactAvatarImageView *portraitImageView; // @synthesize portraitImageView=_portraitImageView;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)setSeparatorLeftEdgeToTitleEdge:(_Bool)arg1;
- (void)setupYXCell;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

