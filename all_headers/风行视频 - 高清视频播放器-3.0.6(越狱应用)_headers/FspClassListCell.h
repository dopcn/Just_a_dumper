//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface FspClassListCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_lineLabel;
    UIImageView *_selectedImageView;
    NSString *_classID;
}

@property(retain, nonatomic) NSString *classID; // @synthesize classID=_classID;
- (void).cxx_destruct;
- (void)setSelectedState:(_Bool)arg1;
- (void)createSelectedImageView;
- (void)createRightLineLabel;
- (void)createTitleLabel:(id)arg1;
- (void)setCellData:(id)arg1 classID:(id)arg2 selected:(_Bool)arg3;

@end

