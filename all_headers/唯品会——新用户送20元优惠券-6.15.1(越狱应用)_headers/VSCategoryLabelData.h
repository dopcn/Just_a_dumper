//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface VSCategoryLabelData : JSONModel
{
    long long _labelId;
    NSString *_name;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long labelId; // @synthesize labelId=_labelId;
- (void).cxx_destruct;

@end

