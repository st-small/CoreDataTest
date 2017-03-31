//
//  SiSStudent+CoreDataProperties.h
//  CoreDataTest
//
//  Created by Stanly Shiyanovskiy on 19.03.17.
//  Copyright © 2017 Stanly Shiyanovskiy. All rights reserved.
//

#import "SiSStudent+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface SiSStudent (CoreDataProperties)

+ (NSFetchRequest<SiSStudent *> *)fetchRequest;

@property (nonatomic) int16_t age;
@property (nullable, nonatomic, copy) NSString *firstName;
@property (nullable, nonatomic, copy) NSString *lastName;
@property (nullable, nonatomic, retain) NSSet<SiSKeyWords *> *studentKeyWord;

@end

@interface SiSStudent (CoreDataGeneratedAccessors)

- (void)addStudentKeyWordObject:(SiSKeyWords *)value;
- (void)removeStudentKeyWordObject:(SiSKeyWords *)value;
- (void)addStudentKeyWord:(NSSet<SiSKeyWords *> *)values;
- (void)removeStudentKeyWord:(NSSet<SiSKeyWords *> *)values;

@end

NS_ASSUME_NONNULL_END
