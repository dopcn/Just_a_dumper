//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMBaseTableViewCell.h"

#import "FMComponentCellProtocol-Protocol.h"

@class FMImageView, NSString, UIButton, UILabel;

@interface FMDetailCommentEmptyCell : FMBaseTableViewCell <FMComponentCellProtocol>
{
    UILabel *_descripLabel;
    FMImageView *_img;
    UIButton *_commentButton;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) FMImageView *img; // @synthesize img=_img;
@property(retain, nonatomic) UILabel *descripLabel; // @synthesize descripLabel=_descripLabel;
- (void).cxx_destruct;
- (void)handleCommentButtonClicked:(id)arg1;
- (void)updateConstraints;
- (void)bindComponent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

