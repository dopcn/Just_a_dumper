//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMBaseTableViewCell.h"

@class ZDM_Label_Open, ZDM_Wiki_DetailModel;

@interface ZDM_Cell_ProductDetail : ZDMBaseTableViewCell
{
    double leftMagin;
    CDUnknownBlockType _openBlock;
    ZDM_Wiki_DetailModel *_wiki_detailModel;
    ZDM_Label_Open *_label_bref;
}

@property(retain, nonatomic) ZDM_Label_Open *label_bref; // @synthesize label_bref=_label_bref;
@property(retain, nonatomic) ZDM_Wiki_DetailModel *wiki_detailModel; // @synthesize wiki_detailModel=_wiki_detailModel;
@property(copy, nonatomic) CDUnknownBlockType openBlock; // @synthesize openBlock=_openBlock;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setModelandOpenBool:(_Bool)arg1;
- (void)cc_setupViews;
- (void)sm_resize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

