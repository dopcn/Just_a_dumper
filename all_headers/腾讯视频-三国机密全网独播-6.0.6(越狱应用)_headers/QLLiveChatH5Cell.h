//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLLiveChatBaseCell.h"

@class QLRichLabel, QLSImageView, UIImageView;
@protocol QLLiveChatTreeCellDelegate;

@interface QLLiveChatH5Cell : QLLiveChatBaseCell
{
    id <QLLiveChatTreeCellDelegate> _tipdelegate;
    QLSImageView *_contentImg;
    UIImageView *_bgView;
    QLRichLabel *_content;
    QLRichLabel *_title;
    QLRichLabel *_desc;
}

+ (double)heightOfSubViewWithBaseInfo:(id)arg1 contentLines:(long long)arg2;
@property(retain, nonatomic) QLRichLabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) QLRichLabel *title; // @synthesize title=_title;
@property(retain, nonatomic) QLRichLabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) QLSImageView *contentImg; // @synthesize contentImg=_contentImg;
@property(nonatomic) __weak id <QLLiveChatTreeCellDelegate> tipdelegate; // @synthesize tipdelegate=_tipdelegate;
- (void).cxx_destruct;
- (void)didTagItem;
- (void)refreshInterfaceUI;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)resetCell;

@end

