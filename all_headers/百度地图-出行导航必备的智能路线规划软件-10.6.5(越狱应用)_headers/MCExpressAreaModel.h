//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSString;

@interface MCExpressAreaModel : JSONModel
{
    NSString *_id;
    NSString *_name;
    NSString *_parent_id;
    NSString *_name_pinyin;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *name_pinyin; // @synthesize name_pinyin=_name_pinyin;
@property(retain, nonatomic) NSString *parent_id; // @synthesize parent_id=_parent_id;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

