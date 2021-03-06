//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HomePageChannelFloor-Protocol.h"

@class HomePageChannelChannelModel, HomePageChannelFBottomModel, HomePageChannelFHeaderModel, HomePageChannelMarginModel, NSArray, NSNumber, NSString, UIColor;
@protocol HomePageChannelFloorCell;

@interface HomePageChannelFloorModel : NSObject <HomePageChannelFloor>
{
    _Bool _withCart;
    HomePageChannelChannelModel *_channelModel;
    NSString *_pattern;
    NSNumber *_identityId;
    double _width;
    double _height;
    HomePageChannelMarginModel *_margin;
    NSString *_bgColor;
    NSString *_style;
    long long _sortType;
    HomePageChannelFHeaderModel *_fheader;
    HomePageChannelFBottomModel *_fbottom;
}

+ (id)objectWithKeyValues:(id)arg1 context:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) HomePageChannelFBottomModel *fbottom; // @synthesize fbottom=_fbottom;
@property(retain, nonatomic) HomePageChannelFHeaderModel *fheader; // @synthesize fheader=_fheader;
@property(nonatomic) _Bool withCart; // @synthesize withCart=_withCart;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) HomePageChannelMarginModel *margin; // @synthesize margin=_margin;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *identityId; // @synthesize identityId=_identityId;
@property(copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(nonatomic) __weak HomePageChannelChannelModel *channelModel; // @synthesize channelModel=_channelModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *floorCells;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)keyValuesDidFinishConvertingToObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <HomePageChannelFloorCell> pinnedFloorCell;
@property(readonly) Class superclass;

@end

