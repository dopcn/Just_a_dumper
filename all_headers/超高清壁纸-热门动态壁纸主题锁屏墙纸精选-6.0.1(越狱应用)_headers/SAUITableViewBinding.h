//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAEventBinding.h"

@interface SAUITableViewBinding : SAEventBinding
{
}

+ (id)bindngWithJSONObject:(id)arg1;
+ (id)bindingWithJSONObject:(id)arg1;
+ (id)typeName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parentTableView:(id)arg1;
- (void)stop;
- (void)execute;
- (id)description;
- (id)initWithEventName:(id)arg1 andTriggerId:(long long)arg2 onPath:(id)arg3 isDeployed:(_Bool)arg4 withDelegate:(Class)arg5;

@end

