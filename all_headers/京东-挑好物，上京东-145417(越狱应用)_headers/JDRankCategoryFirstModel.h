//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface JDRankCategoryFirstModel : JDModel
{
    _Bool _showTab;
    int _orderSort;
    NSString *_cid;
    NSString *_name;
    NSArray *_mergeCatalogsArray;
}

@property(nonatomic) int orderSort; // @synthesize orderSort=_orderSort;
@property(retain, nonatomic) NSArray *mergeCatalogsArray; // @synthesize mergeCatalogsArray=_mergeCatalogsArray;
@property(nonatomic) _Bool showTab; // @synthesize showTab=_showTab;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

