//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface MBoxSearchPhoneNumberCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_phoneLabel;
}

@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (id)attributeString:(id)arg1 highlightNumber:(id)arg2;
- (void)setupCellWithModel:(id)arg1 highlightNumber:(id)arg2;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

