//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;

@interface TMSearchTopTabModel : TBJSONModel
{
    _Bool _selected;
    _Bool _showPrice;
    NSArray *_subTabArray;
}

+ (_Bool)strictMode;
@property(nonatomic) _Bool showPrice; // @synthesize showPrice=_showPrice;
@property(retain, nonatomic) NSArray *subTabArray; // @synthesize subTabArray=_subTabArray;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)unselectAllSubTab;
- (_Bool)isPriceRange;
- (void)selectType:(id)arg1;
- (_Bool)isCurrentSeleccted;
- (_Bool)leftSplitLineShow;
- (_Bool)showArrow;
- (id)currentImage;
- (id)currentFontColor;
- (long long)currentFontSize;
- (id)queryType;
- (id)showName;
- (id)initWithJSONDictionary:(id)arg1;

@end

