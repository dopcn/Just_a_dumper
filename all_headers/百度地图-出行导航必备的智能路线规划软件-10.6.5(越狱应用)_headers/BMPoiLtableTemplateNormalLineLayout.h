//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BMPoiLtableTemplateNormalLineLayout : NSObject
{
    NSMutableArray *_layouts;
    struct CGRect _labelFrame;
    struct CGRect _ratingViewFrame;
    struct CGRect _cardSL4C2Frame;
    struct CGRect _scatterSL3C3Frame;
}

@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(nonatomic) struct CGRect scatterSL3C3Frame; // @synthesize scatterSL3C3Frame=_scatterSL3C3Frame;
@property(nonatomic) struct CGRect cardSL4C2Frame; // @synthesize cardSL4C2Frame=_cardSL4C2Frame;
@property(nonatomic) struct CGRect ratingViewFrame; // @synthesize ratingViewFrame=_ratingViewFrame;
@property(nonatomic) struct CGRect labelFrame; // @synthesize labelFrame=_labelFrame;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 frame:(struct CGRect)arg2;

@end

