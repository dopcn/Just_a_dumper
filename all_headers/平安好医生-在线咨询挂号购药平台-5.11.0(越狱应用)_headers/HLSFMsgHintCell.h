//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HLSFMsgCell.h"

@class PAShadowLabel;

@interface HLSFMsgHintCell : HLSFMsgCell
{
    PAShadowLabel *_labelText;
    PAShadowLabel *_labelClickedText;
}

+ (double)calculateHeightWithDataModel:(id)arg1;
@property(retain, nonatomic) PAShadowLabel *labelClickedText; // @synthesize labelClickedText=_labelClickedText;
@property(retain, nonatomic) PAShadowLabel *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (void)setLiveRoomStyle:(long long)arg1;
- (void)_adjustLayout;
- (void)setContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

